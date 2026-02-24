section "l04_m4_001"{
    int var0;
    int var1;
    if ((Parameter_GetCh1Param(4, 130) == 2) || (Parameter_GetCh1Param(4, 130) == 3)){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("L0404000_D04800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, you...");
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("L0404000_D04900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You're giving this to me like\nnothing happened, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0404000_D05000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "My popularity will drop if I accept\nthis chocolate from someone so\nignorant.\nSo I don't need it.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("L0404000_D05100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Think about the reason a little! ...\nLater.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    else {
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 0);
        Voice_PlayVoice("L0404000_D05200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I don't need it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Eh?");
        Character_ChFace(0, 4, 0);
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0404000_D05300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You can't make that face.");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("L0404000_D05400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... I'm the one who wants to cry...\nAh, crap!");
        Character_BlinkStart(4, 0, (#1));
        Voice_PlayVoice("L0404000_D05500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anyway! I'm not taking that! ...\nReflect on your actions and try\nagain!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    }
