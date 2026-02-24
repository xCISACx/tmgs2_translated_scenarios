section "o03_m6_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You did it, 1st place!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I really did my best!)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You did it, 1st place!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I could let out a yell!)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "We're a great match!\nYou did it, Senpai! Great! Great!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I really did my best!)");
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "A little more... You were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ah... Disappointing.\nJust a little more...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "2nd place.\nWell, things like this are\ntroublesome.");
            Voice_PlayVoice("O0306000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If Senpai did her best some more,\nshe would have gotten 1st place.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I was a little close...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Darn, just a little more!\nIt's disappointing, Senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nBut I was only a little behind...)");
            }
        }
    else if (var0 == 3){
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm sorry, I should have done my\nbest a little more...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm～, one of us wasn't trying hard\nenough...)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aah～, 3rd place.\nWell, it can't be helped.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, these kind of things happen.)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Damnit, 3rd place...\nI thought just a little more would\nhave been an easy victory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I should have tried a little\nharder...)");
            }
        }
    else {
        if (Parameter_GetCh1Param(6, 130) < 3){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I-I'm sorry...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... Pathetic.)");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Last place. Ah～! More!\nShould have ran more faster!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I'm shocked...)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(6, "M6_08F", 0);
            Voice_PlayVoice("O0306000_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... *Sigh* Well, I'm tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I'm so full of regret...\nI did my best...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
