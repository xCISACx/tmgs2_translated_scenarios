section "j02_pl_010"{
    int var0;
    var0 = Date_Get_Date_Place();
    Message_Who(0);
    Message_MsgDisp("主人公", "It's ｛主人公姓名｝.");
    if (var0 == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go shopping at the\nShopping Mall on\n｛日付｝?");
        }
    else if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Waterfront\nPark on ｛日付｝?");
        }
    else if (var0 == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Aquarium on\n｛日付｝?");
        }
    else if (var0 == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Event Hall\non ｛日付｝?");
        }
    else if (var0 == 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Sky Garden\non ｛日付｝?");
        }
    else if (var0 == 5){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Fireworks\nFestival on ｛日付｝?");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to go for a swim at the\nbeach on ｛日付｝?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to go for a walk at the\nbeach on ｛日付｝?");
            }
        }
    else if (var0 == 7){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to Park Avenue on\n｛日付｝?");
        }
    else if (var0 == 8){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Forest Park\non ｛日付｝?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to go flower viewing on\n｛日付｝?");
            }
        }
    else if (var0 == 9){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Botanical\nGarden on ｛日付｝?");
        }
    else if (var0 == 10){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Museum on\n｛日付｝?");
        }
    else if (var0 == 11){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go ice skating on\n｛日付｝?");
        }
    else if (var0 == 12){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go for a swim at the\nIndoor Pool on\n｛日付｝?");
        }
    else if (var0 == 13){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Flea Market\non ｛日付｝?");
        }
    else if (var0 == 14){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go shopping at the\nshopping district on\n｛日付｝?");
        }
    else if (var0 == 15){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Live House\non ｛日付｝?");
        }
    else if (var0 == 16){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go bowling on\n｛日付｝?");
        }
    else if (var0 == 17){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the arcade on\n｛日付｝?");
        }
    else if (var0 == 18){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to Karaoke BOX on\n｛日付｝?");
        }
    else if (var0 == 19){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go watch a movie on\n｛日付｝?");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to go hiking at Habataki\nMountain on ｛日付｝?");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Do you want to go skiing at Habataki\nMountain on ｛日付｝?");
            }
        }
    else if (var0 == 21){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Zoo on\n｛日付｝?");
        }
    else if (var0 == 22){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to Habataki Castle\non ｛日付｝?");
        }
    else if (var0 == 23){
        Message_Who(0);
        Message_MsgDisp("主人公", "Do you want to go to the Amusement\nPark on ｛日付｝?");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "If you hear this, please call me.");
    SoundEffect_PlaySE(22, 127);
    System_Wait(#60);
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright.\nI'll wait for their return call.)");
    Message_CloseMsg();
    }
