# algorithm doesn't have a linkage with a programing language
# there is nothing called algorithmic language
# Writing an algorithm with a specific langugae doesn't mean that we will deep in dive with the language


def binary_search(x, key):
    low = 0;
    high = len(x) - 1

    while low <= high:
        # once high takes a value less than low so it is not a good thing and it means that I searched for all elements and I didn't find what I'm looking for
        mid = (high + low) // 2

        if key == x[mid]:
            return mid
        else:
            if key > x[mid]:
                low = mid + 1
            else:
                high = mid - 1
    return -1
test_array =[1,5,6,7,10,15]
print(binary_search(test_array,10))