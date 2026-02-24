section "b03_m3_090"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
    Background_Bg_GS2("BG_FP400_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Date_ChkDateOpen(25) == 1){
        Voice_PlayVoice("B0303090_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Even though it is a normal display,\nwe can learn many things from it.\nWe learn new things every day.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 91);
        }
    else if (Date_ChkDateOpen(26) == 1){
        Voice_PlayVoice("B0303090_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It seems like they are showing a\nGlasswork Exhibition....\nLet us go see.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 92);
        }
    else if (Date_ChkDateOpen(27) == 1){
        Voice_PlayVoice("B0303090_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Dinosaurs, huh...\nI am very interested.\nShould we examine them carefully?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 93);
        }
    else if (Date_ChkDateOpen(28) == 1){
        Voice_PlayVoice("B0303090_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Gagi Display....\nIt seems like the painter has some\nfans.\nI wonder what kind of art pieces\nthere are.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 94);
        }
    else if (Date_ChkDateOpen(29) == 1){
        Voice_PlayVoice("B0303090_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "They are showing the works of Mihara\nShiki, who was born here.\nLet's go see what kind of works\nthere are.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 95);
        }
    }
