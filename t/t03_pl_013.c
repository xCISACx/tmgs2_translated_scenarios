section "t03_pl_013"{
    int var0 = Parameter_GetPl1Param(15);
    Message_Epilog_Text(4, 1);
    int var1;
    switch (var0){
        case 1:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 1st rate university,\njust as I had hoped.\nMy student life is fun.");
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 2nd rate university.\nMy student life is fun.");
        var1 = 5;
        break ;
        case 3:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 3rd rate university.\nMy student life is fun.");
        var1 = 5;
        break ;
        case 4:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was employed by a 1st rate\ncompany.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        case 5:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was employed by a 2nd rate\ncompany.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        case 6:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was employed by a 3rd rate\ncompany.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        case 7:
        Message_Who(0);
        Message_MsgDisp("　　　", "I'm attending prep school.\nI'm aiming to get into university!");
        var1 = 4;
        break ;
        case 8:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a freeter.");
        var1 = 3;
        break ;
        case 9:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a vocational school.");
        var1 = 4;
        break ;
        case 10:
        Message_Who(0);
        Message_MsgDisp("　　　", "I'm studying to become an\nillustrator.\nThere's still a long way to go.");
        var1 = 5;
        break ;
        case 11:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was employed in the media field.\nMy days are busy yet enriching.");
        var1 = 5;
        break ;
        case 12:
        Message_Who(0);
        Message_MsgDisp("　　　", "I'm doing special training to become\nthe still a long way to go.");
        var1 = 5;
        break ;
        case 13:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a nursery school teacher.\nEven though it's noisy being\nsurrounded by kids, it's enriching.");
        var1 = 6;
        break ;
        case 14:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was scouted and now I'm training\nfor my showbiz debut.\nI aim to be the #1 talent!");
        var1 = 6;
        break ;
        case 15:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 1st rate Sports\nuniversity on a recommendation.");
        var1 = 4;
        break ;
        case 17:
        Message_Who(0);
        Message_MsgDisp("　　　", "I was scouted and now I'm working\nfor a 1st rate company.\nI aim to be the #1 cheerleader!");
        var1 = 5;
        break ;
        case 19:
        Message_Who(0);
        Message_MsgDisp("　　　", "I joined KCH Orchestra.\nEvery day is devoted to practice.");
        var1 = 4;
        break ;
        case 18:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 1st rate Arts university\non a recommendation.");
        var1 = 4;
        break ;
        case 20:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a fashion designer.\nAlthough it's tough, it's a job\nworth doing.");
        var1 = 6;
        break ;
        case 21:
        Message_Who(0);
        Message_MsgDisp("　　　", "Both ｛Hikami＊＊｝ and I\nentered a 1st rate university.");
        var1 = 3;
        break ;
        case 24:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\nselect shop.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        case 26:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\ngas station.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        case 25:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\nflorist.\nMy days are busy yet enriching.");
        var1 = 5;
        break ;
        case 23:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\nconfectionary store.\nThe days are good.");
        var1 = 5;
        break ;
        case 22:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\ninstrument store.\nThe days are enriching.");
        var1 = 5;
        break ;
        case 27:
        Message_Who(0);
        Message_MsgDisp("　　　", "I became a full time employee at the\ngame developing company.\nMy days are busy yet enriching.");
        var1 = 6;
        break ;
        default :
        Message_Who(0);
        Message_MsgDisp("　　　", "I didn't decide on my future career.\nI have to find something fast!");
        var1 = 4;
        break ;
        }
    Message_Epilog_Text(var1 + 5, 1);
    System_Call_GS2("T03", "M3", 300);
    }
