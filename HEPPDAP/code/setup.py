import setuptools


with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name="heppdap",
    version="1.0.2",
    author="Brandon Weindorf",
    author_email="bjweindorf@gmail.com",
    description="High Energy Particle Physics Data Analysis Package",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/bweindorf/HEPPDAP.git",
    install_requires=["matplotlib", "scipy", "numpy", "pandas"],
    entry_points={
        "console_scripts": [
            "heppdap=heppdap.main:main",
            ]
    },
    packages=['heppdap'],
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)
