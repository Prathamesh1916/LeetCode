class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool flag = false;
        if(coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g'){
            if(coordinates[1] == '1' || coordinates[1] == '3' ||  coordinates[1] == '5' ||  coordinates[1] == '7'){
                flag = false;
            }
            if(coordinates[1] == '2' || coordinates[1] == '4' ||  coordinates[1] == '6' ||  coordinates[1] == '8'){
                flag = true;
            }
        }
        if(coordinates[0] == 'b' || coordinates[0] == 'd' || coordinates[0] == 'f' || coordinates[0] == 'h'){
            if(coordinates[1] == '1' || coordinates[1] == '3' ||  coordinates[1] == '5' ||  coordinates[1] == '7'){
                flag = true;
            }
            if(coordinates[1] == '2' || coordinates[1] == '4' ||  coordinates[1] == '6' ||  coordinates[1] == '8'){
                flag = false;
            }
        }
        return flag;
    }
};
