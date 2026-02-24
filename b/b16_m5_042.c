section "b16_m5_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_05_00_E02400", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Do you remember the dreams you have\nat night?");
    Message_MsgSel("Yeah, I do.", "Hmm～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, do I appear in your dreams?\nIf I did, I'd be happy.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 0);
        Voice_PlayVoice("XB_05_00_E02600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Then remember tonight.\nBecause I'll be coming to visit you\nin your dreams.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
