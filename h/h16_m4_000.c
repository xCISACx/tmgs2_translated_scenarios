section "h16_m4_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H1604000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Eh, our Baseball Club is a strong\nteam, surprisingly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIt seems like their practice paid\noff.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad they won...)");
            }
        else {
            Voice_PlayVoice("H1604000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm glad they won.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nIt seems like their practice paid\noff.");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("H1604000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Your support also helped...\nBe my manager.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H1604000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Anyway! That was good.\nYou've worked hard!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I was complimented.)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H1604000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, they lost...");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1604000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's because of not enough\npractice.\nShouldn't you think of a more\nintense training scheme?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah, I have to try harder.)");
            }
        else {
            Voice_PlayVoice("H1604000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, they lost...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H1604000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It was bad luck, but won't they do\nwell next time?\nIt was a good match.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1604000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You might also wanna think up of a\nnew training style.\nYou can do it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I'll do my best!\nThanks, ｛Hariya＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I have to try harder!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
