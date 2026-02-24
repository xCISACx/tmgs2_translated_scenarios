section "l04_m2_001"{
    int var0;
    int var1;
    if ((Parameter_GetCh1Param(2, 130) == 2) || (Parameter_GetCh1Param(2, 130) == 3)){
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0402000_B04000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... I'm not taking it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0402000_B04100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Just think a little bit about what\nyou've done.");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0402000_B04200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Later.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    else if (Parameter_GetCh1Param(2, 130) >= 4){
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0402000_B04300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I... won't accept that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh......?");
        Character_BlinkStart(2, 0, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0402000_B04400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Don't misunderstand, okay?\nI don't mean that I don't wanna take\nit.");
        Character_BlinkStart(2, 2, (#1));
        Voice_PlayVoice("L0402000_B04500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You should know why I'm not taking\nit.");
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0402000_B04600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nSorry for not being a reasonable\nguy.\nLater.");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    }
