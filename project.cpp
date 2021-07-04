// Team project J Pilecki, Siyang Ren
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
void crops();
void print();
const int total=9;
std::string weekday[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
std::string cropname[total]={"Cabbage", "Banana", "Bean", "Citrus", "Wheat", "Onion", "Tomato", "Soybean", "Pepper"};
    double totalgrowday[total]={130, 330, 95, 310, 135, 80, 155, 140, 165};
    double totalwaterneed[total]={430,1800,400 , 1050, 530, 450, 600, 580,760};
    double averagewatercrop[total];
    double Maverage[total];
    double Taverage[total];
    double Waverage[total];
    double THaverage[total];
    double Faverage[total];
    double Saverage[total];
    double Sunaverage[total];


int main(){
srand(time(0));
crops();
print();
}



void crops(){
int rain=0;
int climate;
std::cout<<"Please select the Climatic zone: \n";
std::cout<<"1.Desert/arid\n";
std::cout<<"2.Semi-arid\n";
std::cout<<"3.Sub-humid\n";
std::cout<<"4.Humid\n";
std::cin>>climate;
std::cin.ignore(1000,10);
int temperature;
std::cout<<"Please enter the daily average temperature in Celsius"<<std::endl;
std::cin>>temperature;
std::cin.ignore(1000,10);
std::cout<<"\n\n\n";
for(int i=0;i<total;i++){
   averagewatercrop[i]=totalwaterneed[i]/totalgrowday[i];
}


if(climate==1&&temperature<=15){
std::cout<<"The Evaporation rate is 5 mm/day.\n\n\n";
std::cout<<"Schedule for weekly watering";
int Eva=5;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{

Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);



}}

if(climate==1&&temperature<=25&&temperature>15){std::cout<<"The Evaporation rate is 7 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=7;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);




}
}

if(climate==1&&temperature>25){std::cout<<"The Evaporation rate is 9 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=9;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==2&&temperature<=15){std::cout<<"The Evaporation rate is 4 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=4;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==2&&temperature<=25&&temperature>15){std::cout<<"The Evaporation rate is 6 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=6;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==2&&temperature>25){std::cout<<"The Evaporation rate is 9 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=9;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==3&&temperature<=15){std::cout<<"The Evaporation rate is 3 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=3;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==3&&temperature<=25&&temperature>15){std::cout<<"The Evaporation rate is 5 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=5;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==3&&temperature>25){std::cout<<"The Evaporation rate is 8 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=8;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==4&&temperature<=15){std::cout<<"The Evaporation rate is 1 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=1;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}

}

if(climate==4&&temperature<=25&&temperature>15){std::cout<<"The Evaporation rate is 3 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=3;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}

if(climate==4&&temperature>25){std::cout<<"The Evaporation rate is 6 mm/day";
std::cout<<"Schedule for weekly watering";
int Eva=6;
int Mrain=rand()%2;
double Train=0.3+rand()%2;
double Wrain=0.4+rand()%2;
double Thrain=0.25+rand()%2;
double Frain=0.3+rand()%2;
double Srain=0.5+rand()%2;
double Sunrain=0.2+rand()%2;
for(int z=0; z<total; z++)
{
Maverage[z]=(averagewatercrop[z]-(double)Mrain+Eva);
Taverage[z]=(averagewatercrop[z]-(double)Train+Eva);
Waverage[z]=(averagewatercrop[z]-(double)Wrain+Eva);
THaverage[z]=(averagewatercrop[z]-(double)Thrain+Eva);
Faverage[z]=(averagewatercrop[z]-(double)Frain+Eva);
Saverage[z]=(averagewatercrop[z]-(double)Srain+Eva);
Sunaverage[z]=(averagewatercrop[z]-(double)Sunrain+Eva);
}
}






}

void print(){

std::cout<<"\n\nCrop name ";
for(int d=0;d<7;d++){

    std::cout<<std::setw(15)<<weekday[d];
}

for(int t=0;t<total;t++){
    std::cout<<"\n"<<std::left<<std::setw(18)<<cropname[t]<<std::setw(15)<<Maverage[t]<<std::setw(15)<<Taverage[t]<<std::setw(15)<<Waverage[t]<<std::setw(15)<<THaverage[t]<<std::setw(15)<<Faverage[t]<<std::setw(15)<<Saverage[t]<<std::setw(15)<<Sunaverage[t]<<std::endl;


}
std::cout<<"\n\n\n";
char fert;
while (true){
std::cout << "Has there been fertilizer applied to the crops in the past 30 days? Y/N\n";
std::cin >> fert;

if (fert == 'Y' || fert == 'y'){
std::cout << "No additional fertilizer need be applied. Once a month is sufficient.\n";
break;
}
else if (fert == 'N' || fert == 'n'){
std::cout << "Apply fertilizer to each plant, make note of the date it is given.\n";
break;
}
else
std::cout << "That is not a valid answer, try again.\n\n";
}

}


