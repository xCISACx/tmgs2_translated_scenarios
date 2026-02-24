section "b04_m2_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_BH121_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Voice_PlayVoice("B0402250_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Sit wherever you want.");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it, it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402250_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI don't think there's anything here\nthat would make anyone call it\n\"amazing\", though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It hasn't changed much since I was\nin elementary school.\nIt's quite refreshing, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Unique? ... Really?\nWhat's your room like?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_BH121_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Voice_PlayVoice("B0402250_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...?\nWhy are you sitting up so straight?");
        Message_MsgSel("I always sit like this.", "I'm a little nervous...", "Because there's nowhere to sit.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's fine, but...\nEven my shoulders are getting stiff.\nRelax your feet.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Haha. What are you scared of?\nIt's not like you....\nI'm not going to do anything to you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402250_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "My room isn't that messy.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_BH121_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_02_002_D00", 127, 40);
        Voice_PlayVoice("B0402250_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's a little humid in here today...");
        Message_MsgSel("Because we're both nervous?", "Shouldn't you turn on the cooler?", "What if you take off some clothes?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What the? You're still nervous...\nJust get used to this already.\nHahaha...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402250_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nBut I have to open a window to let\nthe hot air out first.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_BlinkStart(2, 0, (#1), 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402250_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You...\nYour eyes were scary when you said\nthat...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402250_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "N-No. That's... impossible.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Why? It's your own home...");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402250_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... Hey.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm?");
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("B0402250_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If I were in your room just like you\nare in mine, would you be able to\nundress?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Doesn't it depend on the situation?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402250_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What kind of situation...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh... How humid it is?\nIf I were wearing a camisole or\nsomething underneath, I wouldn't\nmind.");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 0);
                Voice_PlayVoice("B0402250_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "............");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402250_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ha...hahaha!\nAh, you're the best, seriously.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(H-He laughed at me......\nBut it felt kind of strange, just\nthen.)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
