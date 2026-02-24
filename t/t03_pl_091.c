section "t03_pl_091"{
    int var0 = Parameter_GetPl1Param(15);
    Message_Epilog_Text(3, 1);
    int var1;
    switch (var0){
        case 1:
        Message_Who(0);
        Message_MsgDisp("　　　", "I entered a 1st rate university,\njust as I had hoped.\nMy student life is fun.");
        var1 = 5;
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
        var1 = 6;
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
        Message_MsgDisp("　　　", "I entered a 1st rate university as a\nscholarship student.");
        var1 = 4;
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
    Message_Epilog_Text(var1 + 4, 1);
    Message_Who(0);
    Message_MsgDisp("　　　", "Komori-kun is still at Hanegasaki\nAcademy, in ｛Wakaouji＊＊｝'s\nclass.");
    Message_Epilog_Text(17, 0);
    Message_DispMsg(0);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　");
    Message_Epilog_Clear(0);
    Message_Epilog_Text(0, 0);
    Message_DispMsg(1);
    Message_Epilog_Text(1, 0);
    Message_Who(0);
    Message_MsgDisp("　　　", "I go and see him after school\nsometimes.\nHis classmates tease him, but with a\nred face, he says it's not\nembarrassing and holds my hand.\nAlthough he's popular with the girls\nin his class, it's fine by me.");
    Message_Epilog_Text(12, 0);
    Message_Who(0);
    Message_MsgDisp("　　　", "When we don't see each other and\nthere is a pretty sunset, he'll send\nme an e-mail saying \"A present\".");
    }
