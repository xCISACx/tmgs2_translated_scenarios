section "r02_pl_000"{
    int var0;
    System_Call_GS2("R01", "PL", 0);
    if (System_GlobalWork(1, 1) == 1){
        var0 = 1;
        }
    else {
        }
    switch (var0){
        case 0:
        if (Parameter_GetSysParam(0) == 1){
            Background_Bg_GS2("BG_SC810_WI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_Y_00_004_000", 127, 40);
            Voice_PlayVoice("R0200000_W00000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Christmas has arrived.\nBecause this party only happens once\na year, please enjoy it very much\neveryone.");
            Voice_PlayVoice("R0200000_W00100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "However, don't cause too much of a\nracket!\nExpect for me to be monitoring you\nall.");
            Voice_PlayVoice("R0200000_W00200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Is that okay?\nThen let's make a toast!");
            Voice_PlayVoice("R0200000_W00300", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Merry Christmas!");
            SoundEffect_PlayStream(2, "SS_T_00_263_S00");
            System_Wait(#60);
            }
        else if (Parameter_GetSysParam(0) == 2){
            Background_Bg_GS2("BG_SC810_WI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_Y_00_004_000", 127, 40);
            Voice_PlayVoice("R0200000_W00400", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Christmas has arrived.\nBecause this party only happens once\na year, please enjoy it very much\neveryone.");
            Voice_PlayVoice("R0200000_W00500", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "However, do not make too much of a\nracket!\nEspecially Wakaouji-sensei's class!");
            SoundEffect_PlayStream(2, "SS_T_00_040_S00");
            Voice_PlayVoice("R0200000_W00600", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Is that okay?\nThen let's make a toast!");
            Voice_PlayVoice("R0200000_W00700", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Merry Christmas!");
            SoundEffect_StopStream(2, 40);
            SoundEffect_PlayStream(2, "SS_T_00_263_S00");
            System_Wait(#60);
            }
        else {
            Background_Bg_GS2("BG_SC820_WI_2", #1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_Y_00_004_000", 127, 40);
            Voice_PlayVoice("R0200000_W00800", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Tonight there's a White Christmas\nparty that happens once every three\nyears.");
            Voice_PlayVoice("R0200000_W00900", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Because this is a special party,\nplease be greatly excited.");
            Voice_PlayVoice("R0200000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "However, no matter how special it\nis, do not slip away from this\nplace!");
            Voice_PlayVoice("R0200000_W01100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Is that okay?\nThen let's make a toast!");
            Voice_PlayVoice("R0200000_W01200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Vice Principal", "Merry Christmas!");
            SoundEffect_PlayStream(2, "SS_T_00_263_S00");
            System_Wait(#60);
            }
        SoundEffect_StopStream(2, 60);
        System_Call_GS2("R02", "PL", 10);
        System_Call_GS2("R05", "PL", 0);
        break ;
        case 1:
        break ;
        }
    }
