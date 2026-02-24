section "j05_m5_000"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really?\nThen do you wanna go to the Shopping\nMall?");
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So, do you wanna go to the\nWaterfront Park?");
        }
    else if (var0 == 2){
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go to the Aquarium to\nget a feel for what it's like to\ntake a walk underwater?");
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So, do you wanna go to the Event\nHall?");
        }
    else if (var0 == 4){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really?\nSo, let's go to the Sky Garden,\nthen.\nThe view would surely be nice.");
        }
    else if (var0 == 5){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0505000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really?\nSo, do you wanna go see the\nfireworks?\nI wanna watch it with you.");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("J0505000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nHey, do you wanna go to the beach?\nI wanna see how you look in a\nswimsuit▼");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("J0505000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Do you wanna go to the beach, then?\nIt might be cold, but it'll change\nour mood.\nHow about it?");
            }
        }
    else if (var0 == 7){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go for a walk at Park\nAvenue, then?\nI think that it would be a good\nchange of pace.");
        }
    else if (var0 == 8){
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go relax at the Forest\nPark, then?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("J0505000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nNow just happens to be the best time\nto see the cherry blossoms.\nI wanna go see.");
            }
        }
    else if (var0 == 9){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E01100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, wanna go relax at the Botanical\nGarden?");
        }
    else if (var0 == 10){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E01200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, wanna go to the Museum?");
        }
    else if (var0 == 11){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("J0505000_E01300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go ice skating, then?");
        }
    else if (var0 == 12){
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("J0505000_E01400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's go to the Indoor Pool, then.\nI wanna see you in a swimsuit▼");
        }
    else if (var0 == 13){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So, do you wanna go find a bargain\nat the Flea Market, then?");
        }
    else if (var0 == 14){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E01600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go to the shopping\ndistrict, then?");
        }
    else if (var0 == 15){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E01700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go to the Live House,\nthen?");
        }
    else if (var0 == 16){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_BlinkStart(5, 2, (#1));
        Voice_PlayVoice("J0505000_E01800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's go bowling, then.\nWe'll surely feel refreshed\nafterwards.");
        }
    else if (var0 == 17){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E01900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go play at the arcade,\nthen?");
        }
    else if (var0 == 18){
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("J0505000_E02000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wanna hear your cute singing voice\nat Karaoke BOX....\nHow about it?");
        }
    else if (var0 == 19){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E02100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go see a movie, then?");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("J0505000_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Do you wanna go to Habataki\nMountain, then?\nThe fall leaves will surely be\npretty.");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("J0505000_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So, do you wanna go skiing?\nThe snow will surely be pretty.");
            }
        }
    else if (var0 == 21){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E02400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go to the zoo then?");
        }
    else if (var0 == 22){
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really?\nHey, wanna go on a field trip to the\ncastle?\nI'm very interested in it～.");
        }
    else if (var0 == 23){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E02600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you wanna go to the Amusement\nPark then?");
        }
    else if (var0 == 24){
        Character_ChFace(0, 4, 1);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("J0505000_E02700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So...\nI wanna invite you over to my place.\nHow about it?");
        }
    }
