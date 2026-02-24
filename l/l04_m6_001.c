section "l04_m6_001"{
    int var0;
    int var1;
    if ((Parameter_GetCh1Param(6, 130) == 2) || (Parameter_GetCh1Param(6, 130) == 3)){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0406000_F03400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Thanks.... But I'm not taking it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Eh?");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("L0406000_F03500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You have no ill intentions,\nSenpai...\nBut it'd be bad if I accepted this,\nright?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0406000_F03600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You have to give this to the person\nthat you're supposed to give it to!\n... Later!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(6, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    else {
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("L0406000_F02800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... I don't need it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Why?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("L0406000_F02900", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "No reason! ...\n*Sigh* I'm kinda really sad now.");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("L0406000_F03000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Kinda even more sad.... Whatever.\nLater. Bye bye!");
        Music_StopBGM(0, 40);
        Character_Chara_GS2(6, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nI wonder what he didn't like about\nit...)");
        }
    }
