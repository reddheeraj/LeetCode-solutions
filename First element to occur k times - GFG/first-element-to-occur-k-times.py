#User function Template for python3


class Solution:
    def firstElementKTime(self,  a, n, k):
        # code here
        d = dict()
        for i in a:
            # for (key, value) in d.items():
            #     if value == k:
            #         return key
            if i in d:
                d[i] += 1
                if d[i] == k:
                    return i
            else:
                d[i] = 1
            for (key, value) in d.items():
                if value == k:
                    return key
        return -1 



#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        sz = [int(x) for x in input().strip().split()]
        n, k = sz[0], sz[1]
        a = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.firstElementKTime(a, n, k))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends