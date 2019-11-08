#ifndef POPULATION_H
#define POPULATION_H

class Fish;

class Population{
	private:
		Fish** fishes;
		int max_fishes = 0;
		int num_fishes = 0;
	public:
		Population(int max_fishes);
		Population();
		virtual ~Population();

		void add(Fish* fish);
		void remove(Fish* fish);
		int size() const;
		Fish* get(int index) const;
};
#endif