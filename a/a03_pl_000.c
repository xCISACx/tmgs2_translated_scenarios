section "a03_pl_000"{
    Background_Bg_GS2("BG_SC601_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("A0300000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "To all first year students.\nStarting today, you are a student of\nHanegasaki Academy.");
    Voice_PlayVoice("A0300000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "At this school, we respect the\nindependence of the students.\nPlease do as you will in high\nschool.");
    Voice_PlayVoice("A0300000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "By experiencing many things your\nradiance will surely become\nbrighter.");
    Voice_PlayVoice("A0300000_W00300", #1, "");
    Message_Who(0);
    Message_MsgDisp("Principal", "To you students, these are three\nirreplaceable years, so we expect\ngreat things from you.");
    SoundEffect_PlayStream(2, "SS_T_00_183_S00");
    System_Wait(40);
    SoundEffect_StopStream(2, 60);
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
