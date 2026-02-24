section "z43_s1_003"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Voice_PlayVoice("Z4314000_N00000", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Are you there, Sis?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, it's open.");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(14, "S1_17F", 0);
    Character_ChFace(0, 0, 8);
    Background_Bg_GS2("BG_BH200_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "What's up, Yuu-kun?\nYou look serious.");
    Voice_PlayVoice("Z4314000_N00100", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Umm...");
    Character_BlinkStart(14, 2, (#1));
    Voice_PlayVoice("Z4314000_N00400", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Did you talk to Nishimoto-san?\nThe other day she went to buy a cake\nto binge on.");
    Character_BlinkStart(14, 3, (#1));
    Voice_PlayVoice("Z4314000_N00600", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Did something go wrong the last time\nyou met...?");
    Character_ChFace(0, 0, 3);
    Voice_PlayVoice("Z4314000_N00700", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Maybe a quarrel?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?! W-Well...");
    Character_ChFace(0, 0, 3);
    Character_BlinkStart(14, 2, (#1));
    Voice_PlayVoice("Z4314000_N00800", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "Is there anything you want to say?");
    Character_ChFace(0, 0, 3);
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("Z4314000_N00900", #1, "");
    Message_Who(14);
    Message_MsgDisp("Yuu", "If you hang out with her, just as\nyou had been doing before, I think\nyou can reconcile.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I see...\nIt would be hard, though...)");
    SoundEffect_PlayStream(3, "SS_T_00_109_M00");
    Message_CloseMsg();
    Screen_WipeOut(2);
    SoundEffect_StopStream(3, 40);
    Screen_ClearScreen();
    }
