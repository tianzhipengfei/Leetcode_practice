class Solution(object):
    def findDuplicate(self, paths):
        """
        :type paths: List[str]
        :rtype: List[List[str]]
        """
        content_dict = dict()
        for path_and_file in paths:
            file_list = path_and_file.split(" ")
            path = file_list[0]
            for i in range(1, len(file_list)):
                file_path = path + '/' + file_list[i].split('(')[0]
                file_content = file_list[i].split('(')[1].split(')')[0]
                if file_content not in content_dict:
                    content_dict[file_content] = [file_path,]
                else:
                    content_dict[file_content].append(file_path)
        res = []
        for key, value in content_dict.items():
            if len(value) > 1:
                res.append(value)
        return res
        
