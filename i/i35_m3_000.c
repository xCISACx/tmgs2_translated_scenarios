section "i35_m3_000"{
    Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I3503000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I just happened to pass by.\nI thought I saw someone like you,\nand it really was you.");
        Voice_PlayVoice("I3503000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You're in the middle or work, aren't\nyou?\nExcuse me.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("I3503000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I just stopped by.\nI don't like sweet food, so I just\ncame here to cheer you on.");
        Character_Chara_GS2(3, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Was he perhaps window shopping...?)");
        }
    else {
        Voice_PlayVoice("", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝. Welcome!");
        Character_ChFace(0, 2, 0);
        Voice_PlayVoice("I3503000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I came here to buy something today,\nbecause glucose powers the brain.\nI have to eat sweet foods every once\nin a while.");
        Message_Who(0);
        Message_MsgDisp("主人公", "So, what will you buy?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("I3503000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Please choose one that isn't that\nsweet and something that can be\ndigested easily.\nGive me 3.\nI'm buying it for my family, too.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, please leave it to me!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
