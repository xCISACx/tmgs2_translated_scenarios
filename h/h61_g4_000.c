section "h61_g4_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the Brass Band!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    if (Parameter_GetCh1Param(13, 514) == 0){
        System_Call_GS2("A02", "G4", 200);
        }
    else {
        Parameter_AddCh1Param(13, 86, 1);
        if (Parameter_GetCh1Param(13, 513) != 1){
            Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is my first day in the Brass\nBand.\nAs expected, I'm a little\nnervous...)");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝!\nRight, you're in the Brass Band,\naren't you?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 2, (#1));
            Character_BlinkStart(13, 0, (#1));
            Voice_PlayVoice("H6113000_M00000", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Haha, you've finally decided to join\nthe club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6113000_M00100", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "I actually knew that we would be in\nthe same club one day, from your\nhoroscope.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehh...\nSo you even knew something like\nthat.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H6113000_M00200", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Yes. I know everything.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(13, 2, (#1));
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6113000_M00300", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "If there's something about the club\nthat you don't know, you can ask me.\nI'm your senior.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, please treat me well, Senpai!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(13, 3, (#1));
            Voice_PlayVoice("H6113000_M00400", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "Ahem, leave it to me.... Hahaha!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It seems like it'll be fun!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(13, "G4_01F", 0);
            Background_Bg_GS2("BG_SCA60_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H6113000_M00500", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Mizushima＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Um, I've joined the Brass Band.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(13, 2, (#1));
            Character_BlinkStart(13, 0, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H6113000_M00600", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... Why?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Uhh...");
            Character_BlinkStart(13, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H6113000_M00700", #1, "");
            Message_Who(13);
            Message_MsgDisp("Mizushima", "... It's fine.\nGo ahead and do what you like.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'll do my best.)");
            }
        Message_CloseMsg();
        Screen_WipeOut(1);
        Screen_ClearScreen();
        }
    }
