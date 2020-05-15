class Solution:
	def nextPermutation(self, nums: List[int]) -> None:
		"""
		Do not return anything, modify nums in-place instead.
		"""
		i,m,K=len(nums)-1,nums[-1],-1
		for k,c in enumerate(reversed(nums[:-1])):
			K=len(nums)-k-2 # index from left side
			if c>=m:
				m=c
				K=K-1 if K==0 else K # reached end of list (e.g., [3,2,1])
			else:
				# everything to the right of `K` is sorted in reverse, so:
				i=bisect.bisect(list(reversed(nums[K+1:])), c)
				break
		# at this point we need to sort everything to the right of `K`
		# but that's a descendingly sorted list, so just reverse it
		reverse(nums,K+1,len(nums)-1)
		swap(nums,K,K+i+1)

def swap(A,i,j):
	buffer = A[i]
	A[i]=A[j]
	A[j]=buffer

def reverse(A,frm,to):
	while frm<to:
		swap(A,frm,to)
		frm+=1
		to-=1