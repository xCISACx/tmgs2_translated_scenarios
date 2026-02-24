section "b16_m7_014"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XC_07_00_G00500", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Watch where you're walking.\nYou might fall, you know?");
    Message_MsgSel("Okay!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G00600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Okay, you're all right.");
        break ;
        case 1:
        Contact_SChFace(0, 4, 1);
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_07_00_G00700", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Please, keep on doing as you like.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
