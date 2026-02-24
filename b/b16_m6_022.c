section "b16_m6_022"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_06_00_F01200", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Hey, Senpai.\nCan I pinch your cheeks?");
    Message_MsgSel("Sure, okay.", "No!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_06_00_F01300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Excuse me....\nWhoa, just as I imagined...\nYeah, it feels nice.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_06_00_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I won't pinch you too hard!\nCome on... Can I do it?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
