section "b04_m1_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401074_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's hot today as well!");
        Message_MsgSel("It's a shower of sunlight!", "I don't like summer...", "It seems cooler in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "That's a good way of saying it.\nThe sunlight feels like it's\ncolliding with our skin, doesn't it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401074_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I like summer.\nWe've discovered one thing different\nin our personalities.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, it would be nice if we took a\nnap there.\nLet's have a rest.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401074_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "So this is what they call the strong\nsmell of grass...\nWhen you're surrounded by plants,\nthere's a smell of summer.");
        Message_MsgSel("It's surely the same smell as the sun.", "It's like a tropical jungle!", "Oh, how elegant!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "The smell of the sun, huh...\nI get what you mean.\nThe smell is exciting, it feels like\nsomething is about to start.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're right.\nAlright, come with me, cheetah!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0401074_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Shut up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0401074_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "If it's such a clear day as this,\nshouldn't we have gone to take a\nswim at the beach?");
        Message_MsgSel("The park on clear days is nice.", "The beach is crowded with lovebirds.", "The twinkling of the waves would be pretty.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Maybe.\nShould we just settle for the park\ntoday, then?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401074_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Well, you're right.\nBut \"lovebirds\", you say...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0401074_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "\"Lovebirds\", you say...\nBut there would surely be lots of\ncouples.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, there would surely be a lot of\ncouples there today.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0401074_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Even though couples don't really go\nto the beach to swim, they still\nflock there in summer?");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's fun, even if you don't swim.");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401074_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah... Ah, I see...");
                Message_Who(0);
                Message_MsgDisp("主人公", "???");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401074_A01400", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I-I'm just saying that I would want\nto go swim!\nDon't misunderstand, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Saeki＊＊｝?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401074_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah... you're right.\nAlright, let's go to the beach next\ntime!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
