section "u01_g4_000"{
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
    if (Parameter_GetPl1Param(22) >= 95){
        Message_Who(0);
        Message_MsgDisp("主人公", "I felt sick, so I slept in today.");
        }
    if (Parameter_GetCh1Param(13, 64) == 0){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\n｛Mizushima＊＊｝, is that you?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("U0113000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Mizushima＊＊｝? What's up?");
        Voice_PlayVoice("U0113000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Do you want to come to the cafe at\nthe Sky Garden?\nI heard they have a limited-time\nmenu.");
        Voice_PlayVoice("U0113000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "It's hard for me to go there\nalone...");
        Message_MsgSel("Yes! On my way!", "I'm sorry, I can't come today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0113000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Great!\nI'll meet you at the entrance of the\ncafe.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, understood!");
            SoundEffect_PlaySE(20, 127);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(13, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G4", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0113000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "No worries. It's not important.\nSee you.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel so bad... She invited me...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(13, 60, #3);
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? It's my phone. Who is it?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("U0113000_M00500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hello?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Mizushima＊＊｝? What's up?");
        Voice_PlayVoice("U0113000_M00600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "There's a limited-time menu over at\nthe cafe at the Sky Garden.\nDo you want to go together?");
        Message_MsgSel("Yeah, sounds good!", "I'm sorry... It's impossible today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0113000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "That's good!\nDo you want me to wait for you at\nthe entrance of the cafe?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay! I'll be there soon!");
            SoundEffect_PlaySE(20, 127);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(13, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G4", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0113000_M00800", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "So... Sorry.\nIt was sudden, wasn't it?\nSee you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel so bad... She invited me...)");
            Parameter_AddCh1Param(13, 60, #3);
            Message_CloseMsg();
            Screen_WipeOut(2);
            break ;
            }
        }
    Parameter_InPl1Param(339, #1);
    }
