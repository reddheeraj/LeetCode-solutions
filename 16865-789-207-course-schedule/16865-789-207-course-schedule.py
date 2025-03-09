class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        pre = defaultdict(list)
        taken = set()
        for course, p in prerequisites:
            pre[course].append(p)
        
        def dfs(course):
            if not pre[course]:
                return True
                
            if course in taken:
                return False
            

            taken.add(course)
            for p in pre[course]:
                if not dfs(p):
                    return False
            
            pre[course] = []
            return True
        
        for c in range(numCourses):
            if not dfs(c):
                return False
        
        return True