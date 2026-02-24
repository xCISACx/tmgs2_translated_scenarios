section "j05_m4_010"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Voice_PlayVoice("J0504010_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, let's go to the Shopping Mall.");
        }
    else if (var0 == 1){
        Voice_PlayVoice("J0504010_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, let's go to the Waterfront Park.");
        }
    else if (var0 == 2){
        Voice_PlayVoice("J0504010_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, wanna go to the Aquarium?");
        }
    else if (var0 == 3){
        Voice_PlayVoice("J0504010_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "There's an event that looks\ninteresting on at the Event Hall.\nWanna go?");
        }
    else if (var0 == 4){
        Voice_PlayVoice("J0504010_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, wanna go to the Sky Garden?");
        }
    else if (var0 == 5){
        Voice_PlayVoice("J0504010_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, let's go to the Fireworks\nFestival!\nI think that the view would\ndefinitely be awesome!");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Voice_PlayVoice("J0504010_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "So... Do you...\nwanna go to the beach?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Voice_PlayVoice("J0504010_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Even though it's cold...\nDo you wanna go to the beach?");
            }
        }
    else if (var0 == 7){
        Voice_PlayVoice("J0504010_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So...\nShould we go for a walk at Park\nAvenue?\nHow does it sound?");
        }
    else if (var0 == 8){
        Voice_PlayVoice("J0504010_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, wanna go to the Forest Park?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Voice_PlayVoice("J0504010_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I wanna go flower watching, so let's\ngo.");
            }
        }
    else if (var0 == 9){
        Voice_PlayVoice("J0504010_D01100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Let's go for a refresher at the\nBotanical Garden.");
        }
    else if (var0 == 10){
        Voice_PlayVoice("J0504010_D01200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wanna go to the Museum?");
        }
    else if (var0 == 11){
        Voice_PlayVoice("J0504010_D01300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's the right season for it, so\nlet's go ice skating!");
        }
    else if (var0 == 12){
        Voice_PlayVoice("J0504010_D01400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So... Right, wanna go...\nto the Indoor Pools...?");
        }
    else if (var0 == 13){
        Voice_PlayVoice("J0504010_D01500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Let's go to the Flea Market and look\nfor a good find.");
        }
    else if (var0 == 14){
        Voice_PlayVoice("J0504010_D01600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wanna go shopping at the shopping\ndistrict?");
        }
    else if (var0 == 15){
        Voice_PlayVoice("J0504010_D01700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wanna go to the Live House?\nHey, let's go together!");
        }
    else if (var0 == 16){
        Voice_PlayVoice("J0504010_D01800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, wanna go bowling?");
        }
    else if (var0 == 17){
        Voice_PlayVoice("J0504010_D01900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wanna go hang out at the arcade?");
        }
    else if (var0 == 18){
        Voice_PlayVoice("J0504010_D02000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, so let's go to karaoke!\nI'll let you listen to my best\nsongs.");
        }
    else if (var0 == 19){
        Voice_PlayVoice("J0504010_D02100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wanna see a movie.\nWanna go together?");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Voice_PlayVoice("J0504010_D02200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Wanna go to Habataki Mountain?\nI heard the fall leaves are pretty.");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Voice_PlayVoice("J0504010_D02300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Wanna go... skiing?");
            }
        }
    else if (var0 == 21){
        Voice_PlayVoice("J0504010_D02400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, let's go to the zoo.");
        }
    else if (var0 == 22){
        Voice_PlayVoice("J0504010_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wanna see the castle!\nDon't you wanna go too?");
        }
    else if (var0 == 23){
        Voice_PlayVoice("J0504010_D02600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't yell enough.\nSo do you wanna go to the Amusement\nPark?");
        }
    else if (var0 == 24){
        Voice_PlayVoice("J0504010_D02700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So, come to my place....\nAh, I don't mean it in a weird way,\nokay!?\nI meant that you should come to my\nplace to hang out!");
        }
    }
