def max_subarray(A):

    positive_sum = 0
    if (A[0] > 0):
        positive_sum = A[0]
        
    largest_num = A[0]
    
    max_ending_here = max_so_far = A[0]

    for x in A[1:]:
        max_ending_here = max(x, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)

        if (x > largest_num):
            largest_num = x
        if (x > 0):
            positive_sum += x

    if (largest_num < 0):
        non_contingent_sum = largest_num
    else:
        non_contingent_sum = positive_sum
    return max_so_far, non_contingent_sum

    
inputs = input()
for i in range(0,int(inputs)):
    input() # number of elements - not needed
    elements = input()
    arr = [int(x) for x in elements.strip().split(" ")]
    max1, max2 = max_subarray(arr)
    print ("{:d} {:d}".format(max1, max2))