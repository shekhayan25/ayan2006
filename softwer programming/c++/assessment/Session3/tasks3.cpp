// 3. Create a class Movie with a parameterized constructor and then use a copy constructor to duplicate a Movie object. Print both the original and copied movie details to show they are identical.

#include <iostream>
using namespace std;

class Movie
{
public:
    string movieName;
    string actor;
    float rating;

    
    Movie(string name, string a, float r)
    {
        movieName = name;
        actor = a;
        rating = r;
    }

   
    Movie(const Movie &m)
    {
        movieName = m.movieName;
        actor = m.actor;
        rating = m.rating;
    }

    
    void display()
    {
        cout << "Movie Name: " << movieName << endl;
        cout << "Actor: " << actor << endl;
        cout << "Rating: " << rating << " / 5" << endl;
    }
};

int main()
{
    
    Movie movie1("3 Idiots", "Aamir Khan", 4.8);

   
    Movie movie2(movie1);

    cout << "Original Movie:" << endl;
    movie1.display();

    cout << "\nCopied Movie:" << endl;
    movie2.display();

    return 0;
}