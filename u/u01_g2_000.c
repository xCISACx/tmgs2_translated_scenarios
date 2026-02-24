section "u01_g2_000"{
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
        Message_MsgDisp("主人公", "I felt sick today, so I slept in.");
        }
    if (Parameter_GetCh1Param(11, 64) == 0){
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Who is it?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("U0111000_K00000", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Hello? It is Onoda.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝?\nWhat's up?");
        Voice_PlayVoice("U0111000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Do you have any time?\nI wanted to ask...\nif you wanted to meet right now?");
        Message_Who(0);
        Message_MsgDisp("主人公", "What? Now?");
        Message_MsgSel("I'm coming!", "I'm sorry, I can't come today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0111000_K00200", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I'm saved!\nI am at the Amusement Park now.\nLet's meet at the entrance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, understood.");
            SoundEffect_PlaySE(20, 127);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(11, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G2", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0111000_K00300", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I see... However, I understand.\nI am sorry.");
            Voice_PlayVoice("U0111000_K00400", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I must be going then.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She seemed very disappointed...\nWas it wrong to turn her down?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(11, 60, #3);
            break ;
            }
        }
    else {
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? It's my cell phone.\nI wonder who it is?");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("U0111000_K00500", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Hello, it's Onoda.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝...\nWhat's up?");
        Voice_PlayVoice("U0111000_K00600", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I am back at cram school now.\nI was wondering if you cared to\nmeet?");
        Message_MsgSel("Yeah, sounds good!", "I'm sorry... It's impossible today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0111000_K00700", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "That's good. I'll wait then.\nI'll be in the front of the\nAmusement Park.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, I'll be there soon.");
            Voice_PlayVoice("U0111000_K00800", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "Oh, I'm sorry. Please be careful.");
            SoundEffect_PlaySE(20, 127);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(11, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G2", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0111000_K00900", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I see... Alright, some other time.");
            Voice_PlayVoice("U0111000_K01000", #1, "");
            Message_Who(11);
            Message_MsgDisp("Onoda", "I must get going.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel so bad... She invited me...)");
            Parameter_AddCh1Param(11, 60, #3);
            Message_CloseMsg();
            Screen_WipeOut(2);
            break ;
            }
        }
    Parameter_InPl1Param(339, #1);
    }
