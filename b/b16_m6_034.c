section "b16_m6_034"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_06_00_F02700", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Does a person's body temperature\nmake you feel better?");
    Message_MsgSel("Yep!", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_06_00_F02800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm sure it does, Senpai, so...\nNo, it's nothing.\nSpeaking to myself!");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_06_00_F02900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Not even the two of ours?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
