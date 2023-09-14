# uhbook
Simple histgram booking tool 

## Histgraming
- UH1Book()
- UH1Book(const char * TITLE, long BINS, double MIN, double MAX)
- UH1Book(std::string & TITLE, long BINS, double MIN, double MAX)
- virtual ~UH1Book();
- void Fill(double VALUE);
- void Fill(double VALUE, double QUANTITY);

## Properties
- void setTitle(std::string & TITLE);
- std::string getTitle();
- long getEntry()
- long getBins()
- void Clear();
- void setNbins(long BINS)
- long getNbins()
- void setMin(double MIN)
- double getMin()
- void setMax(double MAX)
- double getMax()

## Text Display
- void Print();
- void Draw();
