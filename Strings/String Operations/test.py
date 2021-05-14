def fun(input_list,index):
    try:
        output_list = [ 0 ] * len(input_list)
        output_list[index] = input_list[input_list[index]/int(input_list[index + 1])]
        return output_list
    except ValueError :
        print ("Invalid Value")
    except ZeroDivisionError:
        print ("Division by zero")
    finally:
        print ("End of Function")
        
try:
    list1 = [2,4,'6',2,8]
    list2 = fun(list1, 4)
except TypeError:
    print ("Invalid Type")
except IndexError:
    print ("Invalid Index")
finally:
    print ("End of Program")    
