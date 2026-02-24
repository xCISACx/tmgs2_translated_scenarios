section "b16_m5_012"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XB_05_00_E00600", #1, "");
    Message_Who(5);
    Message_MsgDisp("Chris", "Hmm? What's up?");
    Message_MsgSel("Umm...", "Nothing?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Say it louder....\nIf not, then come closer. Come here.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XB_05_00_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "You were just saying my name for no\nreason?\nI like that, too.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
