section "b16_m7_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XC_07_00_G02700", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Hey, are you trying to get spoiled?");
    Message_MsgSel("Yes!", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02800", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well then, it can't be helped.\nI'll lend you my arm.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02900", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Something else?\nWell then, you are just spoiled.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
