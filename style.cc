/* Modern AI Research Lab Styles */

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: 'Segoe UI', Arial, sans-serif;
    line-height: 1.7;
    color: #333;
    background-color: #f8f9fa;
}

/* Header */
header {
    background: linear-gradient(135deg, #0f172a, #1e3a8a);
    color: white;
    text-align: center;
    padding: 80px 20px;
}

header h1 {
    font-size: 3.2rem;
    margin-bottom: 10px;
    font-weight: 700;
}

header p {
    font-size: 1.3rem;
    opacity: 0.95;
    max-width: 700px;
    margin: 0 auto;
}

/* Hero Image */
.hero-image {
    width: 100%;
    max-height: 500px;
    object-fit: cover;
    border-radius: 12px;
    margin-top: 30px;
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.15);
}

/* Sections */
section {
    padding: 60px 20px;
    max-width: 1200px;
    margin: 0 auto;
}

section h2 {
    font-size: 2.2rem;
    margin-bottom: 20px;
    color: #0f172a;
    text-align: center;
}

/* About Section */
#about {
    background-color: white;
    text-align: center;
}

#about p {
    font-size: 1.15rem;
    max-width: 800px;
    margin: 0 auto;
    color: #444;
}

/* Team Section */
#team {
    background-color: #f1f5f9;
}

.team-grid {
    display: grid;
    grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));
    gap: 25px;
    margin-top: 30px;
}

.member {
    background: white;
    padding: 30px 20px;
    border-radius: 12px;
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.08);
    text-align: center;
    transition: all 0.3s ease;
}

.member:hover {
    transform: translateY(-8px);
    box-shadow: 0 15px 30px rgba(0, 0, 0, 0.12);
}

.member h3 {
    font-size: 1.5rem;
    color: #0f172a;
    margin-bottom: 8px;
}

.member .role {
    color: #3b82f6;
    font-weight: 600;
    font-size: 1.05rem;
}

/* Footer */
footer {
    background: #0f172a;
    color: white;
    text-align: center;
    padding: 25px 20px;
    font-size: 1rem;
}

/* Responsive */
@media (max-width: 768px) {
    header h1 {
        font-size: 2.5rem;
    }
    
    header {
        padding: 60px 20px;
    }
    
    section {
        padding: 50px 15px;
    }
}
