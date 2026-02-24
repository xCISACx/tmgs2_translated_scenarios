section "b16_m6_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_06_00_F01900", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I have a message to pass.");
    Message_MsgSel("Okay!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_06_00_F02000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I wonder what I should do at such\ntimes?\n... Do you know, Senpai?");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_06_00_F02100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You'll know when we're together.\nSo don't go away.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
