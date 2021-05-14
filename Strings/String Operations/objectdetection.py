#Import streamlit
 import streamlit as st
 #Import NumPy and OpenCV
 import numpy as np
 import cv2 
 #Import Matplotlib for visualization
 import matplotlib.pyplot as plt
 #Import Image module of PIL library for handling images
 from PIL import Image

def obj_detection(my_img):
     st.set_option('deprecation.showPyplotGlobalUse', False)
  /*streamlit.set_option sets config options. streamlit.pyplot() now requires a figure to be provided. Setting deprecation.showPyplotGlobalUse to False will disable the deprecation warning.*/
     column1, column2 = st.beta_columns(2)
 /*streamlit.beta_columns() inserts containers laid out as side-by-side columns*/
    #Display subheading on top of input image 
    column1.subheader("Input image") #streamlit.subheader()
     st.text("") #streamlit.text() writes preformatted and fixed-width text
     #Display the input image using matplotlib
     plt.figure(figsize = (16,16)) 
     plt.imshow(my_img)
     column1.pyplot(use_column_width=True) 

neural_net = cv2.dnn.readNet("PATH_1", "PATH2")
 /*PATH_1 and PATH_2 are the paths of locations where you have stored the yolov3.weights and yolov3.cfg files respectively*/
      labels = []   #Initialize an array to store output labels 
     with open("PATH_3", "r") as file: 
 /*open coco.names file downloaded in step(2) in read(“r”) mode. PATH_3 is the path of location where you have stored the output labels’ file*/
         labels = [line.strip() for line in file.readlines()]
 #strip() method removes leading and trailing spaces from the label strings
       names_of_layer = neural_net.getLayerNames() 
 #Store the names of model’s layers obtained using getLayerNames() of OpenCV
      output_layers = [names_of_layer[i[0]-1] for i in   
      neural_net.getUnconnectedOutLayers()]
 #getUnnnectedOutLayers() returns indexes of layers with unconnected output
     colors = np.random.uniform(0,255,size=(len(labels), 3))  
  #RGB values selected randomly from 0 to 255 using np.random.uniform()
     # Image loading
     newImage = np.array(my_img.convert('RGB')) #Convert the image into RGB  
     form
     img = cv2.cvtColor(newImage,1) #cvtColor()
 #Store the height, width and number of color channels of the image        
    height,width,channels = img.shape  

#Convert the images into blobs using blobFromImage()
   blob = cv2.dnn.blobFromImage(img, 0.00391, (400,400), (0,0,0), True, crop 
   = False)   
/*Above parameters are (image object, scale factor, size, mean(mean subtraction from each layer), swapRB(Blue to red), crop enabling)*/
     neural_net.setInput(blob) #Feed the model with blobs as the input
     outputs = neural_net.forward(output_layers) 
 /*forward() runs forward pass to compute output of layer named by ‘output_layers’*/
     classID = [] #Array to store output labels
     confidences = [] #Array to store confidence score
     boxes =[] #Array to store bounding boxes dimensions 

for op in outputs: 
         for detection in op:
             scores = detection[5:] #confidence score 
 #select output class having maximum probability (confidence score)
             class_ID = np.argmax(scores)  
 #Update ‘confidence’ variable with the score of above selected output label
             confidence = scores[class_ID] 
             if confidence > 0.5:   
 /*If confidence score exceeds 0.5 (>50% probability), it means an object has been detected. Get its dimensions  */               
                 center_x = int(detection[0] * width)
                 center_y = int(detection[1] * height) #centre of object
                 w = int(detection[2] * width) 
  #’w’ is width of detected object while ‘width’ is original width of image
                 h = int(detection[3] * height) 
#’h’ is height of detected object while ‘height’ is original height of image
                 # Calculate coordinates of bounding box
     #x-coordinate of top-left corner of box
                 x = int(center_x - w /2) 
    #y-coordinate of top-left corner of box  
                 y = int(center_y - h/2)   
                 #Organize the detected objects in an array
                 boxes.append([x,y,w,h])
                 confidences.append(float(confidence))
                 classID.append(class_id)


score_threshold = st.sidebar.slider("Confidence_threshold", 
     0.00,1.00,0.5,0.01)
     nms_threshold = st.sidebar.slider("NMS_threshold", 0.00, 1.00, 0.5, 
     0.01)
 /*streamlit.slider() inserts a slider widget. Its parameters are (textual label displayed, min vale, max value, stepping interval)*/
     indexes = cv2.dnn.NMSBoxes(boxes,
     confidences,score_threshold,nms_threshold)   
 #NMSBoxes() performs NMS given boxes and corresponding scores   
     print(indexes) 


items = []  #Array to store label of detected object(s)
     for i in range(len(boxes)): 
         if i in indexes:
    #get dimensions of ith bounding box to be formed
             x,y,w,h = boxes[i] 
         #get name of detected object
             label = str.upper((labels[classID[i]]))   
             color = colors[i] #color of ith bounding box
/*Form rectangular box. Its parameters are (image, start point, end point, color, thickness) */
            cv2.rectangle(img,(x,y),(x+w,y+h),color,3) 
            items.append(label) #Add the output label of bounded object 

st.text("") #preformatted and fixed-width text
     column2.subheader("Output image") #Title on top of the output image
     st.text("")
 #Plot the output image with detected objects using matplotlib
     plt.figure(figsize = (15,15))
     plt.imshow(img) #show the figure
     column2.pyplot(use_column_width=True) #actual plotting
     if len(indexes)>1:
 #Text to be printed if output image has multiple detected objects 
         st.success("Found {} Objects - {}".format(len(indexes),[item for     
         item in set(items)]))
     else:   
#Text to be printed if output image has a single detected object
         st.success("Found {} Object - {}".format(len(indexes),[item for 
         item in set(items)]))
 #streamlit.success() prints the success message 

 def main():    
     st.title("Welcome to Streamlit app") #Title displayed in UI using streamlit.title()
     #Display some text on UI using streamlit.write()
     st.write("You can view real-time object detection done using YOLO model   
     here. Select one of the following options to proceed:") 
 /*2 options will be seen on UI. On selecting first option (“See an illustration”), you will see an input image (which we have already fed through the code) having a cat and a dog, and its corresponding output with the objects detected. It is only meant for illustrating the output of YOLOv3. On selecting the second option (“Choose an image of your choice”) will enable you to browse an image file from your machine. YOLOv3 will then run on that custom image for detecting objects.*/
     choice = st.radio("", ("See an illustration", "Choose an image of your   
     choice"))
     #streamlit.radio() inserts a radio button widget 

#If user selects 2nd option:
     if choice == "Choose an image of your choice":
           image_file = st.file_uploader("Upload", type=['jpg','png','jpeg'])
 /*streamlit.fileUploader() shows a file uploader widget. By default, size limit for uploaded files is  200MB. You can configure it using the server.maxUploadSize config option. Here, “Upload” will be the label of uploader widget and the allowed file types have been mentioned in types[] array*/

if image_file is not None: #if a file has been uploaded
             my_img = Image.open(image_file)  #open the image
    #perform object detection on selected image
             obj_detection(my_img) 
 #If user selects 1st option
     elif choice == "See an illustration":
    #display the example image
         my_img = Image.open("PATH_OF_EXAMPLE_IMAGE")
  #perform object detection on the example image 
         obj_detection(my_img) 

 if __name__ == '__main__':
     main() 

     
