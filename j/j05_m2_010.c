section "j05_m2_010"{
    int var0;
    var0 = Date_Get_Date_Place();
    if (var0 == 0){
        Voice_PlayVoice("J0502010_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Wanna go to the shopping mall?");
        }
    else if (var0 == 1){
        Voice_PlayVoice("J0502010_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nWanna go for a walk at the\nWaterfront Park?");
        }
    else if (var0 == 2){
        Voice_PlayVoice("J0502010_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Wanna go to the Aquarium?");
        }
    else if (var0 == 3){
        Voice_PlayVoice("J0502010_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Wanna go to the Event Hall?");
        }
    else if (var0 == 4){
        Voice_PlayVoice("J0502010_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nI'm kinda curious about the Sky\nGarden.\nDo you wanna go together?");
        }
    else if (var0 == 5){
        Voice_PlayVoice("J0502010_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Wanna... go see the fireworks?");
        }
    else if (var0 == 6){
        if (Date_ChkDateOpenOmit(15) == 1){
            Voice_PlayVoice("J0502010_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. I wanna go for a swim.\nHow does it sound?");
            }
        else if (Date_ChkDateOpenOmit(16) == 1){
            Voice_PlayVoice("J0502010_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI wanna go take a look at the ocean.\nWanna go together?");
            }
        }
    else if (var0 == 7){
        Voice_PlayVoice("J0502010_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nDo you wanna go to Park Avenue?");
        }
    else if (var0 == 8){
        Voice_PlayVoice("J0502010_B00900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nWanna go for a walk at the Forest\nPark?");
        }
    else if (var0 == 8){
        if (Date_ChkDateOpenOmit(19) == 1){
            Voice_PlayVoice("J0502010_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Apparently, the cherry blossoms are\nin full bloom.\nWanna go take a look at it together?");
            }
        }
    else if (var0 == 9){
        Voice_PlayVoice("J0502010_B01100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nI was thinking of going for a nice\nwalk in the Botanical Garden.");
        }
    else if (var0 == 10){
        Voice_PlayVoice("J0502010_B01200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Do you wanna go to the Museum?");
        }
    else if (var0 == 11){
        Voice_PlayVoice("J0502010_B01300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go ice skating?");
        }
    else if (var0 == 12){
        Voice_PlayVoice("J0502010_B01400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go to Indoor Pool?");
        }
    else if (var0 == 13){
        Voice_PlayVoice("J0502010_B01500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go to the Flea Market?");
        }
    else if (var0 == 14){
        Voice_PlayVoice("J0502010_B01600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I was thinking of going for a stroll\nat the shopping district.\nDo you wanna go together?");
        }
    else if (var0 == 15){
        Voice_PlayVoice("J0502010_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah.\nDo you wanna go to the Live House?");
        }
    else if (var0 == 16){
        Voice_PlayVoice("J0502010_B01800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go bowling?\nGoing by myself would be lame.");
        }
    else if (var0 == 17){
        Voice_PlayVoice("J0502010_B01900", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Do you wanna go to the arcade?\nTogether?");
        }
    else if (var0 == 18){
        Voice_PlayVoice("J0502010_B02000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go to karaoke?");
        }
    else if (var0 == 19){
        Voice_PlayVoice("J0502010_B02100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There's a movie I wanna see....\nDo you wanna come with me?");
        }
    else if (var0 == 20){
        if (Date_ChkDateOpenOmit(61) == 1){
            Voice_PlayVoice("J0502010_B02300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Do you wanna go to Habataki\nMountain?\nThe view there would surely be\npretty.");
            }
        else if (Date_ChkDateOpenOmit(62) == 1){
            Voice_PlayVoice("J0502010_B02400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Where...\nWell, do you wanna go skiing?");
            }
        }
    else if (var0 == 21){
        Voice_PlayVoice("J0502010_B02500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Do you wanna go to the zoo?");
        }
    else if (var0 == 22){
        Voice_PlayVoice("J0502010_B02600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Yeah. Do you wanna go to the castle?");
        }
    else if (var0 == 23){
        Voice_PlayVoice("J0502010_B02700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Let's go to the Amusement Park.\nWe'd surely have a great time.");
        }
    else if (var0 == 24){
        Voice_PlayVoice("J0502010_B02800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Wanna come to my place?\nIt's small and not much to see,\nthough.");
        }
    }
