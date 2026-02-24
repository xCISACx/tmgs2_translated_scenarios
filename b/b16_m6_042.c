section "b16_m6_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_06_00_F02400", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Senpai, you seem cheerful.");
    Message_MsgSel("Yep!", "Nope.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 11);
        Voice_PlayVoice("XB_06_00_F02500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I look forward to our next date,\ntoo....\nI hope you'll want to go on a date.\nIs something not right?");
        break ;
        case 1:
        Contact_SChFace(0, 2, 3);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_06_00_F02600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well then, let's just walk a little\nmore slowly.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
