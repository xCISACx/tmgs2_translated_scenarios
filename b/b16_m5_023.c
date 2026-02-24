section "b16_m5_023"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XC_05_00_E01300", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Do you understand the difference\nbetween a smooch and a kiss?");
    Message_MsgSel("Yeah, I do.", "Hmm～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_05_00_E01400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "... That's too bad.\nI was thinking of directly teaching\nyou if you didn't know.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 3);
        Voice_PlayVoice("XC_05_00_E01500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Then I'll teach you....\nCome over here.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
