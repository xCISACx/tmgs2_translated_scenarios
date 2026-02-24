section "r06_m1_000"{
    int var0;
    SoundEffect_PlayStream(3, "SS_T_00_160_M00");
    Voice_PlayVoice("R0601000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Santa", "Ho ho ho.\nI will give a present to you.\nMerry Christmas!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I wonder what I got..\nI'll open it.)");
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Dolphin Massage Toy\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nPeople who get very tired have\nthis...)");
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "(\"Mermaid Keychain\")");
        Message_Who(0);
        Message_MsgDisp("主人公", "(It's a beautiful keychain.\nIt'd be a waste not to use it.)");
        }
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_12F", 0);
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("R0601000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, that's... The gift I brought.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really!?\nThe gift ｛Saeki＊＊｝ has\nis the gift I brought...");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝.");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("R0601000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You picked well.\nI'm the guy who brought that gift.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really!?\nThe gift ｛Saeki＊＊｝ has\nis the gift I brought...");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("R0601000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Somehow, it made quite a detour.\nIt made a direct pass to me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* I see!");
        }
    else {
        Voice_PlayVoice("", 1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("R0601000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'm the guy who brought the gift\nthat you have.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really!?\nThe gift ｛Saeki＊＊｝ has\nis the gift I brought...");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("R0601000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What are the chances of coincidences\nlike that.\nIt seems very Christmas-like, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* Right!");
        }
    if (System_GlobalWork(0, 1) == 1){
        var0 = 1;
        }
    else if (System_GlobalWork(0, 1) == 2){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 3){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 4){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 5){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 6){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 7){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 8){
        var0 = 4;
        }
    else if (System_GlobalWork(0, 1) == 9){
        var0 = 2;
        }
    else if (System_GlobalWork(0, 1) == 10){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 11){
        var0 = 3;
        }
    else if (System_GlobalWork(0, 1) == 12){
        var0 = 2;
        }
    Character_ChFace(0, 4, 0);
    Character_BlinkStart(1, 0, (#1));
    if (var0 == 1){
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("R0601000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Heh... This is good. What luck!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hooray! Perfect.\nHe seemed quite pleased.... Right?)");
            }
        else {
            Voice_PlayVoice("R0601000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, this is nice...\nI have a nice feeling about this.\nThanks. I'll accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! Perfect.\nHe seemed like he was happy.)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("R0601000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm...\nI can probably put this to use.\nYeah, I'll accept it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        else {
            Voice_PlayVoice("R0601000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Ah, I get the feeling this is\nokayish.\nThanks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay, he seemed fairly pleased.)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("R0601000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "A-Ah, I see.\nThis is what I get for exchanging.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, things like this are okay.)");
            }
        else {
            Voice_PlayVoice("R0601000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Heh...\nI see, so this is what I get for\nexchanging, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Well, things like this are okay.)");
            }
        }
    else if (var0 == 4){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        if (Parameter_GetCh1Param(1, 130) <= 2){
            Voice_PlayVoice("R0601000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "What the...\nIs there a different guy who wanted\nthis?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem very pleased...)");
            }
        else {
            Voice_PlayVoice("R0601000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You...\nThink a little bit more about gift\nexchanging, got it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He didn't seem very pleased...)");
            }
        }
    Character_Chara_GS2(1, "NON");
    Parameter_AddCh1Param(1, 61, 3);
    Parameter_AddCh1Param(1, 60, 5);
    Parameter_AddCh1Param(1, 62, #5);
    Parameter_AddCh1Param(1, 86, 1);
    }
