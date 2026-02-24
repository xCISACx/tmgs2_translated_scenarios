section "b16_m4_043"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XB_04_00_D02700", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Tell me about the things you like\nnext time.");
    Message_MsgSel("Sure, okay.", "No way!");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_04_00_D02800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I wanna know... For the future...\nT-That's all!");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XB_04_00_D02900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's okay to tell me...\nAh, you're smiling...\nYou were teasing me!");
        break ;
        }
    Music_StopBGM(0, 40);
    }
