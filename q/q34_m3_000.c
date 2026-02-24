section "q34_m3_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(3, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Tomorrow is the last day of the\ntrip...\nIt went so fast.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("Q1203000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You are right.\nHowever, it is still a field trip\nuntil we arrive home.\nIt is too early to feel down.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I guess so.");
        }
    else if (Parameter_GetCh1Param(3, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Tomorrow is the last day of the\ntrip...\nIt went so fast.");
        Voice_PlayVoice("Q1203000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes, it was because everyday was\nworthwhile.\nI learned a lot.\nI feel as if I would want an\nextension.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I think so, too!");
        Character_ChFace(0, 0, 10);
        Message_Who(0);
        Message_MsgDisp("主人公", "(That was a wholesome field trip...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Tomorrow is the last day of the\ntrip...\nIt went so fast.");
        Voice_PlayVoice("Q1203000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I agree.\nIt is as if I do not want to return\nto school.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh...?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("Q1203000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "That is unusual....\nEven I did not expect this.");
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("Q1203000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Never expected this kind of field\ntrip would turn out fun.\nIt's thanks... thanks to you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it is much more fun than being\nalone.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("Q1203000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No, you know it is not just that...\nWell... maybe that works for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "......?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(3, 3, (#1));
        Voice_PlayVoice("Q1203000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Thank you....\nIt turned out to be such a nice\nfield trip.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder if I really did make it\nmemorable...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    Parameter_AddCh1Param(3, 61, 6);
    Parameter_AddCh1Param(3, 60, 4);
    Parameter_AddCh1Param(3, 62, #6);
    }
