section "p23_m5_000"{
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_SC_920_000", 127, 40);
    if (Parameter_GetCh1Param(5, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome to the disco \"Young Prince\"!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh* People are actually coming\nin.\nIt's so busy that I feel faint...)");
        Voice_PlayVoice("P1305000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("？？？", "Disco?");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nWill you dance?");
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("P1305000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wah, it looks so fun. I'll dance!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then I'll show you around!");
        }
    else if (Parameter_GetCh1Param(5, 130) >= 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome to the disco \"Young Prince\"!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh* People are actually coming\nin.\nIt's so busy that I feel faint...)");
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("？？？", "｛主人公｝.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝!\nSo you came.");
        Voice_PlayVoice("P1305000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah.\nI'm suffering from withdrawal\nsymptoms.");
        Message_Who(0);
        Message_MsgDisp("主人公", "From what?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P1305000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm cured now▼");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm...?");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("P1305000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Are you showing people around?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, yeah. Will you come in?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1305000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Sure.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Then I'll show you around!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    System_Call_GS2("P24", "M5", 0);
    }
