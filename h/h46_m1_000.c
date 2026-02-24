section "h46_m1_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A00000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "They won. That was a good game.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("H4601000_A00100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Anyway...\nEven though it's a practice match,\nI'm glad they won....\nYou worked hard, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A00200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "They won. Congrats.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they did it!");
                Character_ChFace(0, 0, 0);
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("H4601000_A00300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "This might be a stretch...\nBut to me, you're today's MVP.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4601000_A00400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You did your best cheering, right?\nYou worked hard.... Congrats.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 2, (#1));
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4601000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it's just a practice game...\nAnd the loss wasn't the Cheerleading\nClub's fault.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, but it's still\nunfortunate...)");
                }
            else {
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A00700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4601000_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't lose heart....\nIt wasn't your fault, okay?\nThe players weren't strong enough.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4601000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it's just a practice game...\nAnd it'll be fine if your cheering\nhelps them win next time....\nSo cheer up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, that was unfortunate...)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "They won. That was a good game.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("H4601000_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Anyway...\nEven though it's a practice match,\nI'm glad they won....\nYou worked hard, too.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "They won. Congrats.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they did it!");
                Character_ChFace(0, 0, 0);
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(1, 2, (#1));
                Voice_PlayVoice("H4601000_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "This might be a stretch...\nBut to me, you're today's MVP.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4601000_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "You did your best cheering, right?\nYou worked hard.... Congrats.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(1, 2, (#1));
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A01500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H4601000_A01600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it's just a practice game...\nAnd the loss wasn't the Cheerleading\nClub's fault.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, but it's still\nunfortunate...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(1, "M1_01F", 0);
                Voice_PlayVoice("H4601000_A01700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4601000_A01800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Don't lose heart....\nIt wasn't your fault, okay?\nThe players weren't strong enough.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4601000_A01900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, it's just a practice game...\nAnd it'll be fine if your cheering\nhelps them win next time....\nSo cheer up.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ah, that was unfortunate...)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
