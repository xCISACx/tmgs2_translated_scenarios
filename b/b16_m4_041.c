section "b16_m4_041"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_04_00_D02100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Don't you feel like time is passing\nby really fast?");
    Message_MsgSel("Yeah.", "No, I don't.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XB_04_00_D02200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... It'd be nicer if it went slower.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_04_00_D02300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I guess it can't be helped since\nwe're always together.\nEven so...");
        break ;
        }
    Music_StopBGM(0, 40);
    }
