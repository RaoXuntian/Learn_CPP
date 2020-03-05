#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

void display(std::vector<std::vector<int> >);

int main(int argc, char const *argv[]) {
	std::vector<std::vector<int> > vec;
	int a[] = {6}, b[] = {9,8,10}, c[] = {4,5}, d[] = {1,2,3,0};
	std::vector<int> va(a, a + sizeof(a)/sizeof(int));
	vec.push_back(va);
	std::vector<int> vb(b, b + sizeof(b)/sizeof(int));
	vec.push_back(vb);
	std::vector<int> vc(c, c + sizeof(c)/sizeof(int));
	vec.push_back(vc);
	std::vector<int> vd(d, d + sizeof(d)/sizeof(int));
	vec.push_back(vd);

	std::cout << "正常的顺序" << std::endl;
	display(vec);

	std::cout << "\nreverse之后" << std::endl;
	std::vector<std::vector<int> > vec1 = vec;
	reverse(vec1.begin(), vec1.end());
	display(vec1);

	std::cout << "\nsort之后" << std::endl;
	std::vector<std::vector<int> > vec2(vec.begin(), vec.end());
	sort(vec2.begin(), vec2.end());
	display(vec2);

	std::cout << "\n修改sort规则之后" << std::endl;
	std::vector<std::vector<int> > vec3(vec.begin(), vec.end());
	sort(vec3.begin(), vec3.end(), [] (std::vector<int> v1, std::vector<int> v2) {return v1.back() > v2.back();});
	display(vec3);

	std::cout << "\n猜猜这是什么排序规则" << std::endl;
	std::vector<std::vector<int> > vec4(vec.begin(), vec.end());
	sort(vec4.begin(), vec4.end(), [] (std::vector<int> v1, std::vector<int> v2) {return v1.size() > v2.size();});
	display(vec4);

	std::cout << "\n这个呢" << std::endl;//vector求和后排序
	std::vector<std::vector<int> > vec5(vec.begin(), vec.end());
	//sort(vec5.begin(), vec5.end(), [] (std::vector<int> v1, std::vector<int> v2) {return accumulate(v1.begin(),v1.end(),0) > accumulate(v2.begin(),v2.end(),0);});
	sort(vec5.begin(), vec5.end(), [] (std::vector<int> v1, std::vector<int> v2) {int a(0), b(0); for(int i = 0; i < v1.size(); i++) a += v1[i]; for(int i = 0; i < v2.size(); i++) b += v1[i];return a > b;});
	display(vec5);
	return 0;
}

void display(std::vector<std::vector<int> > vec) {
	for (auto x: vec) {
		for (std::vector<int>::iterator it(x.begin()); it != x.end(); it++) {
			std::cout << *it << " ";
		}
		std::cout << std::endl;
	}
}