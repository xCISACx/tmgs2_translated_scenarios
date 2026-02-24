section "b16_m7_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XB_07_00_G02400", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "When it's just the two of us, you\nwant to behave like a spoiled child.\nIs that right?");
    Message_MsgSel("Yep!", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_07_00_G02500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's an embarrassing thing to do.\nDon't do that in school. Okay?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 6);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XB_07_00_G02600", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Then are you are just trying to\nembarass us?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
