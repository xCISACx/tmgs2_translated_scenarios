section "b16_m6_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XB_06_00_F02700", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Senpai has a cute name.");
    Message_MsgSel("Yep!", "Nope.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_06_00_F02800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'll call you by your first name....\nOne day.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XB_06_00_F02900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "But I like it.\nI've fallen in love with it, Senpai.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
