section "b16_m7_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XC_07_00_G02400", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Hey, again. The burr came out.");
    Message_MsgSel("Is that right?", "It's nothing like that!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's you, right? The burr.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's not different. You are a burr.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
